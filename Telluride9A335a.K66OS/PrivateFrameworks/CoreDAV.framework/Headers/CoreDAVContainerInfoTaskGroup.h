/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVTaskGroup.h"
#import "CoreDAVPropFindTaskDelegate.h"

@class NSString, NSMutableSet, NSSet;
@protocol CoreDAVContainerInfoTaskGroupDelegate;

@interface CoreDAVContainerInfoTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate> {
	int _phase;	// 44 = 0x2c
	NSMutableSet *_containerURLs;	// 48 = 0x30
	NSMutableSet *_containers;	// 52 = 0x34
	int _containerInfoDepth;	// 56 = 0x38
	NSString *_appSpecificHomeSetPropNameSpace;	// 60 = 0x3c
	NSString *_appSpecificHomeSetPropName;	// 64 = 0x40
}
@property(assign) int containerInfoDepth;	// G=0x3004fad9; S=0x3004fae9; @synthesize=_containerInfoDepth
@property(readonly, assign) NSSet *containerURLs;	// G=0x3004faf9; @synthesize=_containerURLs
@property(assign, nonatomic) id<CoreDAVContainerInfoTaskGroupDelegate> delegate;	// @dynamic
- (id)initWithAccountInfoProvider:(id)accountInfoProvider containerURLs:(id)urls taskManager:(id)manager;	// 0x3004eded
- (id)_copyContainerParserMappings;	// 0x3004fabd
- (id)_copyContainerWithURL:(id)url andProperties:(id)properties;	// 0x3004fa81
- (void)_getContainerHomeSet;	// 0x3004f001
- (void)_getContainerTopLevelInfo;	// 0x3004f1b1
// declared property getter: - (int)containerInfoDepth;	// 0x3004fad9
// declared property getter: - (id)containerURLs;	// 0x3004faf9
- (void)dealloc;	// 0x3004ee55
- (id)description;	// 0x3004eedd
- (void)propFindTask:(id)task parsedResponses:(id)responses error:(id)error;	// 0x3004f38d
// declared property setter: - (void)setContainerInfoDepth:(int)depth;	// 0x3004fae9
- (void)startTaskGroup;	// 0x3004ef4d
- (void)taskGroupWillCancelWithError:(id)taskGroup;	// 0x3004ef95
@end

