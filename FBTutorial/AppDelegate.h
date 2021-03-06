//
//  AppDelegate.h
//  FBTutorial
//
//  Created by Matthew Liu on 6/11/13.
//  Copyright (c) 2013 Matthew Liu. All rights reserved.
//

#import <UIKit/UIKit.h>

extern NSString *const SCSessionStateChangedNotification;

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) UINavigationController *navController;
@property (strong, nonatomic) UIViewController *mainViewController;

- (void)showLoginView;
- (void)openSession;

@end
