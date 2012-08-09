/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library

@class NSString, NSArray, NSDictionary;

@interface NSProcessInfo : NSObject {
	NSDictionary *environment;	// 4 = 0x4
	NSArray *arguments;	// 8 = 0x8
	NSString *hostName;	// 12 = 0xc
	NSString *name;	// 16 = 0x10
	int automaticTerminationOptOutCounter;	// 20 = 0x14
}
@property(retain) NSArray *arguments;	// G=0x37326e61; S=0x373a2745; converted property
@property(assign) BOOL automaticTerminationSupportEnabled;	// G=0x373a2e1d; S=0x373a2ded; converted property
@property(readonly, retain) NSDictionary *environment;	// G=0x373a2359; converted property
@property(readonly, retain) NSString *hostName;	// G=0x373a2821; converted property
@property(retain) id processName;	// G=0x37337b31; S=0x373a2991; converted property
+ (id)processInfo;	// 0x37326dd9
- (id)init;	// 0x37326e05
- (void)_exitIfSuddenTerminationEnabledWithStatus:(int)status;	// 0x373a2d7d
- (void)_exitWhenSuddenTerminationEnabledWithStatus:(int)status;	// 0x373a2d81
- (int)_suddenTerminationDisablingCount;	// 0x373a2d85
- (unsigned)activeProcessorCount;	// 0x373a2c45
// converted property getter: - (id)arguments;	// 0x37326e61
// converted property getter: - (BOOL)automaticTerminationSupportEnabled;	// 0x373a2e1d
- (void)dealloc;	// 0x373a22cd
- (void)disableAutomaticTermination:(id)termination;	// 0x373a2d8d
- (void)disableSuddenTermination;	// 0x373a2d75
- (void)enableAutomaticTermination:(id)termination;	// 0x373a2dbd
- (void)enableSuddenTermination;	// 0x373a2d79
// converted property getter: - (id)environment;	// 0x373a2359
- (id)globallyUniqueString;	// 0x373a2a6d
// converted property getter: - (id)hostName;	// 0x373a2821
- (BOOL)isTranslated;	// 0x373a2d01
- (unsigned)operatingSystem;	// 0x373a2b3d
- (id)operatingSystemName;	// 0x373a2b41
- (id)operatingSystemVersionString;	// 0x373a2bad
- (unsigned long long)physicalMemory;	// 0x373a2ca5
- (int)processIdentifier;	// 0x373314c9
// converted property getter: - (id)processName;	// 0x37337b31
- (unsigned)processorCount;	// 0x373a2bd9
// converted property setter: - (void)setArguments:(id)arguments;	// 0x373a2745
// converted property setter: - (void)setAutomaticTerminationSupportEnabled:(BOOL)enabled;	// 0x373a2ded
// converted property setter: - (void)setProcessName:(id)name;	// 0x373a2991
- (double)systemUptime;	// 0x373a2d71
- (id)userFullName;	// 0x373a2b35
- (id)userHomeDirectory;	// 0x373a2b39
- (id)userName;	// 0x373a2b31
@end
