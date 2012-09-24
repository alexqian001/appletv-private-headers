/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/XPCService.framework/XPCService
 */

#import "XPCService-Structs.h"
#import <NSObject.h> // Unknown library
#import "XPCServiceArchiver.h"

@class NSBundle, NSString, NSDictionary;
@protocol OS_xpc_object;

@interface XPCServiceBundle : NSObject <XPCServiceArchiver> {
	NSBundle *_bundle;	// 4 = 0x4
	NSString *_serviceIdentifier;	// 8 = 0x8
	long _serviceIdentifierPredicate;	// 12 = 0xc
	NSString *_executablePath;	// 16 = 0x10
	long _executablePathPredicate;	// 20 = 0x14
	NSString *_realExecutablePath;	// 24 = 0x18
	long _realExecutablePathPredicate;	// 28 = 0x1c
	int _serviceType;	// 32 = 0x20
	long _serviceTypePredicate;	// 36 = 0x24
	NSDictionary *_serviceDictionary;	// 40 = 0x28
	long _serviceDictionaryPredicate;	// 44 = 0x2c
	NSDictionary *_launchdJobDictionary;	// 48 = 0x30
	long _launchdJobDictionaryPredicate;	// 52 = 0x34
	NSObject<OS_xpc_object> *_xpcJobData;	// 56 = 0x38
	long _xpcJobDataPredicate;	// 60 = 0x3c
}
@property(readonly, retain) NSBundle *bundle;	// G=0x34844921; converted property
@property(readonly, retain) NSString *executablePath;	// G=0x34844455; converted property
@property(readonly, retain) NSDictionary *launchdJobDictionary;	// G=0x34844a81; converted property
@property(readonly, retain) NSString *realExecutablePath;	// G=0x34844595; converted property
@property(readonly, retain) NSDictionary *serviceDictionary;	// G=0x34844661; converted property
@property(readonly, assign) int serviceType;	// G=0x34844931; converted property
+ (id)XPCServiceBundleAtPath:(id)path;	// 0x34843a19
+ (id)XPCServiceBundleForMainExecutable;	// 0x34843b51
+ (id)XPCServiceBundleFromExecutableAtPath:(id)path;	// 0x34843af5
+ (launch_data *)createLaunchDataFromArray:(id)array;	// 0x34843681
+ (id)createXPCJobsArrayFromArray:(id)array;	// 0x3484386d
+ (BOOL)useRestrictiveRoleAccountSecurityPolicy;	// 0x348434a1
- (id)initWithArchive:(id)archive;	// 0x34843bfd
- (id)initWithBundle:(id)bundle;	// 0x34843bbd
- (id)archiveForCache;	// 0x34843d71
- (id)arrayForServiceDictionaryKey:(id)serviceDictionaryKey;	// 0x348448c5
- (BOOL)boolForServiceDictionaryKey:(id)serviceDictionaryKey;	// 0x348447a1
// converted property getter: - (id)bundle;	// 0x34844921
- (void)dealloc;	// 0x3484407d
- (id)description;	// 0x34844379
- (id)descriptionWithIndent:(unsigned)indent;	// 0x34844185
- (id)dictionaryForServiceDictionaryKey:(id)serviceDictionaryKey;	// 0x34844869
// converted property getter: - (id)executablePath;	// 0x34844455
- (id)identifier;	// 0x3484438d
- (BOOL)isSystemService;	// 0x34844a61
// converted property getter: - (id)launchdJobDictionary;	// 0x34844a81
- (launch_data *)launchdJobLaunchData;	// 0x34844fbd
- (id)launchdJobPropertyListData;	// 0x34844f1d
- (id)launchdJobPropertyListString;	// 0x34844f61
- (id)objectForServiceDictionaryKey:(id)serviceDictionaryKey;	// 0x34844775
// converted property getter: - (id)realExecutablePath;	// 0x34844595
// converted property getter: - (id)serviceDictionary;	// 0x34844661
// converted property getter: - (int)serviceType;	// 0x34844931
- (id)stringForServiceDictionaryKey:(id)serviceDictionaryKey;	// 0x3484480d
- (id)xpcJobData;	// 0x34844fd9
@end
