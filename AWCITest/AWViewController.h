//
//  AWViewController.h
//  AWCITest
//
//  Created by Allen Wu on 6/25/13.
//
//  Test project for setting up iOS CI server using Jenkins
//  Uses code from:
//    * http://cs491f10.wordpress.com/2010/10/28/core-motion-gyroscope-example/
//    * https://github.com/AvinashP/VoiceRecorder

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import <AudioToolbox/AudioToolbox.h>
#import <CoreMotion/CoreMotion.h>

@interface AWViewController : UIViewController <AVAudioRecorderDelegate> {
  IBOutlet UIProgressView* progressView;
  IBOutlet UILabel* lblStatusMsg;
  IBOutlet UILabel* gyroLabel;
  
  NSMutableDictionary* recordSetting;
  NSMutableDictionary* editedObject;
  NSString* recorderFilePath;
  AVAudioRecorder* recorder;
  
  SystemSoundID soundID;
  NSTimer* timer;
  
  CMMotionManager* motionManager;
  NSTimer* timer2;
  float rotation;
}
- (IBAction)startRecording;
- (IBAction)stopRecording;
- (IBAction)playSound;
- (void)handleTimer;
- (void)doGyroUpdate;


@end
