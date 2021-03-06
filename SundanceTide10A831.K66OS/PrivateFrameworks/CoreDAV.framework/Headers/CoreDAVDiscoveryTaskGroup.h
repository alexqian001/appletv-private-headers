/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVOptionsTaskDelegate.h"
#import "CoreDAVPropFindTaskDelegate.h"
#import "CoreDAVTaskGroup.h"

@class NSMutableArray, NSString, NSArray;
@protocol CoreDAVAccountInfoProvider, CoreDAVDiscoveryTaskGroupDelegate;

@interface CoreDAVDiscoveryTaskGroup : CoreDAVTaskGroup <CoreDAVOptionsTaskDelegate, CoreDAVPropFindTaskDelegate> {
	NSString *_requiredComplianceClass;	// 44 = 0x2c
	NSArray *_httpPorts;	// 48 = 0x30
	NSArray *_httpsPorts;	// 52 = 0x34
	NSString *_httpServiceString;	// 56 = 0x38
	NSString *_httpsServiceString;	// 60 = 0x3c
	NSString *_wellKnownPath;	// 64 = 0x40
	NSArray *_potentialContextPaths;	// 68 = 0x44
	NSMutableArray *_discoveries;	// 72 = 0x48
	BOOL _didReceiveAuthenticationError;	// 76 = 0x4c
	id<CoreDAVAccountInfoProvider> _discoveredAccountInfo;	// 80 = 0x50
}
@property(assign, nonatomic) id<CoreDAVDiscoveryTaskGroupDelegate> delegate;	// @dynamic
@property(assign) BOOL didReceiveAuthenticationError;	// G=0x33408e2d; S=0x33408e45; @synthesize=_didReceiveAuthenticationError
@property(retain) id<CoreDAVAccountInfoProvider> discoveredAccountInfo;	// G=0x33408e5d; S=0x33408e71; @synthesize=_discoveredAccountInfo
@property(retain, nonatomic) NSArray *potentialContextPaths;	// G=0x33408ea1; S=0x33408eb1; @synthesize=_potentialContextPaths
@property(retain, nonatomic) NSString *wellKnownPath;	// G=0x33408e81; S=0x33408e91; @synthesize=_wellKnownPath
- (id)initWithAccountInfoProvider:(id)accountInfoProvider taskManager:(id)manager;	// 0x3340433d
- (id)initWithAccountInfoProvider:(id)accountInfoProvider taskManager:(id)manager httpPorts:(id)ports httpsPorts:(id)ports4 httpServiceString:(id)string httpsServiceString:(id)string6 wellKnownPath:(id)path potentialContextPaths:(id)paths requiredComplianceClass:(id)aClass;	// 0x334041a1
- (id)initWithAccountInfoProvider:(id)accountInfoProvider taskManager:(id)manager httpPorts:(id)ports httpsPorts:(id)ports4 httpServiceString:(id)string httpsServiceString:(id)string6 wellKnownPaths:(id)paths requiredComplianceClass:(id)aClass;	// 0x334042ed
- (void)addToDiscoveryArray:(id *)discoveryArray discovery:(id)discovery;	// 0x33408b4d
- (id)allDiscoveryPaths:(id)paths;	// 0x3340550d
- (id)allDiscoveryPorts:(id)ports withScheme:(id)scheme;	// 0x33405439
- (void)cancelTaskGroup;	// 0x3340450d
- (id)cleanedStringsFromResponseHeaders:(id)responseHeaders forHeader:(id)header;	// 0x334089d5
- (void)completeDiscovery:(id)discovery error:(id)error;	// 0x33407711
- (void)completeOptionsTask:(id)task error:(id)error;	// 0x33407169
- (void)dealloc;	// 0x334043d1
// declared property getter: - (BOOL)didReceiveAuthenticationError;	// 0x33408e2d
// declared property getter: - (id)discoveredAccountInfo;	// 0x33408e5d
- (id)extractPrincipalURLFromPropFindTask:(id)propFindTask error:(id *)error;	// 0x334085d1
- (void)getDiscoveryStatus:(id)status priorFailed:(id *)failed subsequentFailed:(id *)failed3 priorIncomplete:(id *)incomplete subsequentIncomplete:(id *)incomplete5 priorSuccess:(id *)success subsequentSuccess:(id *)success7;	// 0x33408b95
- (void)optionsTask:(id)task error:(id)error;	// 0x33407451
// declared property getter: - (id)potentialContextPaths;	// 0x33408ea1
- (id)propFindProperties;	// 0x334083f1
- (void)propFindTaskFinished:(id)finished;	// 0x334074b9
// declared property setter: - (void)setDidReceiveAuthenticationError:(BOOL)receiveAuthenticationError;	// 0x33408e45
// declared property setter: - (void)setDiscoveredAccountInfo:(id)info;	// 0x33408e71
// declared property setter: - (void)setPotentialContextPaths:(id)paths;	// 0x33408eb1
// declared property setter: - (void)setWellKnownPath:(id)path;	// 0x33408e91
- (id)setupDiscoveries:(id)discoveries withSchemes:(id)schemes;	// 0x33405079
- (void)srvLookupTask:(id)task error:(id)error;	// 0x33406881
- (void)startOptionsTask:(id)task;	// 0x334063ed
- (void)startPropfindTask:(id)task;	// 0x33406585
- (void)startSRVLookup:(id)lookup serviceString:(id)string;	// 0x33405591
- (void)startTaskGroup;	// 0x334045f5
- (void)startWellKnownFallbackHeadTask:(id)task withURL:(id)url;	// 0x33405cfd
- (void)startWellKnownLocationTask:(id)task withURL:(id)url;	// 0x33405735
- (void)syncAway;	// 0x33405069
- (void)task:(id)task didFinishWithError:(id)error;	// 0x33406825
- (void)taskGroupWillCancelWithError:(id)taskGroup;	// 0x334044c1
// declared property getter: - (id)wellKnownPath;	// 0x33408e81
@end

