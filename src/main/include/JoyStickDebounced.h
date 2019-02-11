#pragma once

#include <frc/Joystick.h>

class JoyStickDebounced : public frc::Joystick {
  public:
  explicit JoyStickDebounced(int id): 
  frc::Joystick(id) {

  }

  bool getButtonDebounced(int num) {
    return buttons[num] && !last_buttons[num];
  }

  bool getButton(int num) {
    return buttons[num];
  }

  void updateButtons() {
    for (int i = 0; i < 11; ++i) {
      last_buttons[i] = buttons[i];
      buttons[i] = this->GetRawButton(i);
    }
  }

  private:
  bool buttons[11];
  bool last_buttons[11];
};