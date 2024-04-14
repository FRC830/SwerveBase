#pragma once

struct SwerveInput{
    double xTranslation;
    double yTranslation;
    double rotation;
    bool slowMode;
    bool resetGyroZeroHeading;
};

struct RobotControlData {
    SwerveInput swerveInput;
};

