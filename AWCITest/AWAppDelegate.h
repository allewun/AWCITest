//
//  AWAppDelegate.h
//  AWCITest
//
//  Created by Allen Wu on 6/25/13.
//

#import <UIKit/UIKit.h>

@class AWViewController;

@interface AWAppDelegate : NSObject <UIApplicationDelegate> {
  UIWindow *window;
  AWViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet AWViewController *viewController;

@end
