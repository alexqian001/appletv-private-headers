/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
 */

#import "UIAccessibility-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, NSMutableSet;
@protocol UIAccessibilityRemoteElementChildrenDelegate;

@interface UIAccessibilityRemoteElement : NSObject {
	NSString *_uuid;	// 4 = 0x4
	int _remotePid;	// 8 = 0x8
	unsigned _contextId;	// 12 = 0xc
	BOOL _onClientSide;	// 16 = 0x10
	id _remoteChildrenDelegate;	// 20 = 0x14
	NSMutableSet *_allChildren;	// 24 = 0x18
}
@property(assign, nonatomic) unsigned contextId;	// G=0x357d214d; S=0x357d215d; @synthesize=_contextId
@property(assign, nonatomic) BOOL onClientSide;	// G=0x357d216d; S=0x357d217d; @synthesize=_onClientSide
@property(assign, nonatomic) id<UIAccessibilityRemoteElementChildrenDelegate> remoteChildrenDelegate;	// G=0x357d218d; S=0x357d219d; @synthesize=_remoteChildrenDelegate
@property(assign, nonatomic) int remotePid;	// G=0x357d210d; S=0x357d211d; @synthesize=_remotePid
@property(retain, nonatomic) NSString *uuid;	// G=0x357d212d; S=0x357d213d; @synthesize=_uuid
+ (void)initialize;	// 0x357d1699
+ (BOOL)registerRemoteElement:(id)element;	// 0x357d1bd1
+ (id)remoteElementForBlock:(id)block;	// 0x357d1aad
+ (id)remoteElementForContextId:(unsigned)contextId;	// 0x357d1b55
- (id)initWithUUID:(id)uuid andRemotePid:(int)pid andContextId:(unsigned)anId;	// 0x357d1705
- (id)accessibilityContainerElements;	// 0x357d1905
- (CGRect)accessibilityFrame;	// 0x357d1e51
- (BOOL)accessibilityViewIsModal;	// 0x357d1901
// declared property getter: - (unsigned)contextId;	// 0x357d214d
- (void)dealloc;	// 0x357d17d9
- (id)description;	// 0x357d2049
// declared property getter: - (BOOL)onClientSide;	// 0x357d216d
// declared property getter: - (id)remoteChildrenDelegate;	// 0x357d218d
// declared property getter: - (int)remotePid;	// 0x357d210d
// declared property setter: - (void)setContextId:(unsigned)anId;	// 0x357d215d
// declared property setter: - (void)setOnClientSide:(BOOL)side;	// 0x357d217d
// declared property setter: - (void)setRemoteChildrenDelegate:(id)delegate;	// 0x357d219d
// declared property setter: - (void)setRemotePid:(int)pid;	// 0x357d211d
// declared property setter: - (void)setUuid:(id)uuid;	// 0x357d213d
- (void)unregister;	// 0x357d1e31
// declared property getter: - (id)uuid;	// 0x357d212d
@end

