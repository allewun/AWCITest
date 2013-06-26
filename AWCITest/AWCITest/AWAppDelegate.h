//
//  AWAppDelegate.h
//  AWCITest
//
//  Created by Allen Wu on 6/25/13.
//

#import <UIKit/UIKit.h>

@class AWViewController;

@interface AWAppDelegate : UIResponder <UIApplicationDelegate> {
  UIWindow* window;
  AWViewController* viewController;
}

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) AWViewController *viewController;

@end
