/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BKSWorkspaceDelegate.h"
#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSTimer, BKSWorkspace, NSString, NSMutableDictionary;
@protocol ATVBKSWorkspaceDelegateProtocol;

__attribute__((visibility("hidden")))
@interface ATVBKSWorkspace : XXUnknownSuperclass <BKSWorkspaceDelegate> {
	id<ATVBKSWorkspaceDelegateProtocol> _delegate;	// 4 = 0x4
	NSString *_kioskApplicationBundleIdentifier;	// 8 = 0x8
	BKSWorkspace *_workspace;	// 12 = 0xc
	NSMutableDictionary *_launchedAppInfo;	// 16 = 0x10
	NSTimer *_activityHoldTimer;	// 20 = 0x14
}
@property(retain, nonatomic) NSTimer *activityHoldTimer;	// G=0x338b9; S=0x338c9; @synthesize=_activityHoldTimer
@property(retain) id<ATVBKSWorkspaceDelegateProtocol> delegate;	// G=0x33801; S=0x33815; @synthesize=_delegate
@property(copy, nonatomic) NSString *kioskApplicationBundleIdentifier;	// G=0x33825; S=0x33839; @synthesize=_kioskApplicationBundleIdentifier
@property(retain, nonatomic) NSMutableDictionary *launchedAppInfo;	// G=0x33881; S=0x33891; @synthesize=_launchedAppInfo
@property(retain, nonatomic) BKSWorkspace *workspace;	// G=0x33849; S=0x33859; @synthesize=_workspace
+ (id)sharedInstance;	// 0x32639
- (void).cxx_destruct;	// 0x338f1
- (void)_activityHoldTimerFired;	// 0x337b1
- (id)_getWorkspaceCreatingIfNeeded:(BOOL)needed;	// 0x33651
- (void)activateApplicationWithIdentifier:(id)identifier;	// 0x3277d
- (void)activateApplicationWithIdentifier:(id)identifier openURL:(id)url;	// 0x32791
- (void)activateKioskApplicationWithIdentifier:(id)identifier;	// 0x326f1
// declared property getter: - (id)activityHoldTimer;	// 0x338b9
// declared property getter: - (id)delegate;	// 0x33801
- (void)initializeWorkspace;	// 0x326cd
- (BOOL)isAlternateAppActivated;	// 0x32909
// declared property getter: - (id)kioskApplicationBundleIdentifier;	// 0x33825
// declared property getter: - (id)launchedAppInfo;	// 0x33881
- (void)reboot;	// 0x32ad1
- (void)restartApp;	// 0x32b91
- (void)sendBREventToTopApplication:(id)topApplication;	// 0x4c4495
- (void)sendGSEventToTopApplication:(GSEventRef)topApplication;	// 0x32a05
- (void)sendHIDEventToTopApplication:(IOHIDEventRef)topApplication;	// 0x32955
// declared property setter: - (void)setActivityHoldTimer:(id)timer;	// 0x338c9
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x33815
// declared property setter: - (void)setKioskApplicationBundleIdentifier:(id)identifier;	// 0x33839
// declared property setter: - (void)setLaunchedAppInfo:(id)info;	// 0x33891
// declared property setter: - (void)setWorkspace:(id)workspace;	// 0x33859
- (id)topAppBundleIdentifier;	// 0x32735
// declared property getter: - (id)workspace;	// 0x33849
- (void)workspace:(id)workspace applicationActivated:(id)activated;	// 0x3332d
- (void)workspace:(id)workspace applicationDebugStateChanged:(id)changed newState:(BOOL)state;	// 0x3364d
- (void)workspace:(id)workspace applicationDidBecomeReceiver:(id)application fromApplication:(id)application3;	// 0x32fd5
- (void)workspace:(id)workspace applicationDidFailToActivate:(id)application;	// 0x33331
- (void)workspace:(id)workspace applicationDidFailToLaunch:(id)application;	// 0x33329
- (void)workspace:(id)workspace applicationDidFinishLaunching:(id)application withInfo:(id)info;	// 0x33131
- (void)workspace:(id)workspace applicationDidRemainReceiver:(id)application fromApplication:(id)application3;	// 0x33119
- (void)workspace:(id)workspace applicationDidStartLaunching:(id)application;	// 0x3312d
- (void)workspace:(id)workspace applicationExited:(id)exited withInfo:(id)info;	// 0x33339
- (void)workspace:(id)workspace applicationSuspended:(id)suspended withSettings:(id)settings;	// 0x33335
- (void)workspace:(id)workspace applicationSuspensionSettingsUpdated:(id)updated withSettings:(id)settings;	// 0x33571
- (id)workspace:(id)workspace applicationWillBecomeReceiver:(id)application fromApplication:(id)application3;	// 0x32fd1
- (void)workspace:(id)workspace handleOpenApplicationRequest:(id)request withOptions:(id)options origin:(id)origin withResult:(id)result;	// 0x32c1d
- (void)workspace:(id)workspace handleOpenURL:(id)url fromApplication:(id)application;	// 0x33575
- (void)workspace:(id)workspace handleOpenURLRequest:(id)request application:(id)application withOptions:(id)options origin:(id)origin withResult:(id)result;	// 0x33579
- (void)workspace:(id)workspace handleStatusBarReturnActionFromApplication:(id)application statusBarStyle:(id)style;	// 0x33649
- (void)workspaceDidResume:(id)workspace;	// 0x33129
- (void)workspaceDidSuspend:(id)workspace;	// 0x33121
- (void)workspaceWillResume:(id)workspace;	// 0x33125
- (void)workspaceWillSuspend:(id)workspace;	// 0x3311d
@end

