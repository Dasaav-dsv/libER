// Modify posture params at runtime

#include "../example_base.hpp"

// For wait_for_params:
#include <coresystem/cs_param.hpp>
// For param table access:
#include <param/param.hpp>

void example_base() {
    // Allocate console
    con_allocate(false);
    // Wait until all param tables are initialized and accessible.
    // A timeout value of -1 means waiting indefinitely. A positive
    // timeout value means the function will return if the condition
    // is not met in the alloted time
    from::CS::SoloParamRepositoryImp::wait_for_params(-1);
    // Create a param instance on the stack with default field values
    from::paramdef::POSTURE_CONTROL_PARAM_PRO_ST posture_pro{};
    // Set fields:
    posture_pro.a000_rightArmIO = 30;
    posture_pro.a000_rightArmFB = 30;
    posture_pro.a000_leftArmIO = 30;
    posture_pro.a000_leftArmFB = 30;
    posture_pro.a002_rightArmIO = 30;
    posture_pro.a002_rightArmFB = 30;
    posture_pro.a002_leftArmIO = 30;
    posture_pro.a002_leftArmFB = 30;
    posture_pro.a003_rightArmIO = 30;
    posture_pro.a003_rightArmFB = 30;
    posture_pro.a003_leftArmIO = 30;
    posture_pro.a003_leftArmFB = 30;
    posture_pro.a010_rightArmIO = 30;
    posture_pro.a010_rightArmFB = 30;
    posture_pro.a010_leftArmIO = 30;
    posture_pro.a010_leftArmFB = 30;
    posture_pro.a012_rightArmIO = 30;
    posture_pro.a012_rightArmFB = 30;
    posture_pro.a012_leftArmIO = 30;
    posture_pro.a012_leftArmFB = 30;
    posture_pro.a013_rightArmIO = 30;
    posture_pro.a013_rightArmFB = 30;
    posture_pro.a013_leftArmIO = 30;
    posture_pro.a013_leftArmFB = 30;
    posture_pro.a014_rightArmIO = 30;
    posture_pro.a014_rightArmFB = 30;
    posture_pro.a014_leftArmIO = 30;
    posture_pro.a014_leftArmFB = 30;
    posture_pro.a015_rightArmIO = 30;
    posture_pro.a015_rightArmFB = 30;
    posture_pro.a015_leftArmIO = 30;
    posture_pro.a015_leftArmFB = 30;
    posture_pro.a016_rightArmIO = 30;
    posture_pro.a016_rightArmFB = 30;
    posture_pro.a016_leftArmIO = 30;
    posture_pro.a016_leftArmFB = 30;
    // Iterate over all entries in PostureControlParam_Pro
    // Bidirectional iteration is available for every param table
    for (auto [id, row] : from::param::PostureControlParam_Pro) {
        // Copy param row data into a game's param row
        // Individual fields can be read and modified as needed, too
        row = posture_pro;
        std::cout << "Modified PostureControlParam_Pro row " << id << '\n';
    }
    // Create a param instance on the stack with default field values
    from::paramdef::POSTURE_CONTROL_PARAM_GENDER_ST posture_gender{};
    // Set fields:
    posture_gender.a000_rightElbowIO = 55;
    posture_gender.a000_leftElbowIO = 55;
    posture_gender.a000_bothLegsIO = 55;
    posture_gender.a002_rightElbowIO = 55;
    posture_gender.a002_leftElbowIO = 55;
    posture_gender.a002_bothLegsIO = 55;
    posture_gender.a003_rightElbowIO = 55;
    posture_gender.a003_leftElbowIO = 55;
    posture_gender.a003_bothLegsIO = 55;
    posture_gender.a010_rightElbowIO = 55;
    posture_gender.a010_leftElbowIO = 55;
    posture_gender.a010_bothLegsIO = 55;
    posture_gender.a012_rightElbowIO = 55;
    posture_gender.a012_leftElbowIO = 55;
    posture_gender.a012_bothLegsIO = 55;
    posture_gender.a013_rightElbowIO = 55;
    posture_gender.a013_leftElbowIO = 55;
    posture_gender.a013_bothLegsIO = 55;
    posture_gender.a014_rightElbowIO = 55;
    posture_gender.a014_leftElbowIO = 55;
    posture_gender.a014_bothLegsIO = 55;
    posture_gender.a015_rightElbowIO = 55;
    posture_gender.a015_leftElbowIO = 55;
    posture_gender.a015_bothLegsIO = 55;
    posture_gender.a016_rightElbowIO = 55;
    posture_gender.a016_leftElbowIO = 55;
    posture_gender.a016_bothLegsIO = 55;
    // Iterate over all entries in PostureControlParam_Gender
    // Bidirectional iteration is available for every param table
    for (auto [id, row] : from::param::PostureControlParam_Gender) {
        // Copy param row data into a game's param row
        // Individual fields can be read and modified as needed, too
        row = posture_gender;
        std::cout << "Modified PostureControlParam_Gender row " << id << '\n';
    }
}
