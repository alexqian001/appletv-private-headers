/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSString, NSArray;

@interface SAUIAddViews : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSString *dialogPhase;	// G=0x326a6851; S=0x326a686d; 
@property(copy, nonatomic) NSString *displayTarget;	// G=0x326a68bd; S=0x326a68d9; 
@property(assign, nonatomic) BOOL scrollToTop;	// G=0x326a6929; S=0x326a69a1; 
@property(assign, nonatomic) BOOL temporary;	// G=0x326a69e5; S=0x326a6a5d; 
@property(copy, nonatomic) NSArray *views;	// G=0x326a6aa1; S=0x326a6b09; 
+ (id)addViews;	// 0x326a67c1
+ (id)addViewsWithDictionary:(id)dictionary context:(id)context;	// 0x326a6805
// declared property getter: - (id)dialogPhase;	// 0x326a6851
// declared property getter: - (id)displayTarget;	// 0x326a68bd
- (id)encodedClassName;	// 0x326a67b5
- (id)groupIdentifier;	// 0x326a67a5
- (BOOL)requiresResponse;	// 0x326a6b71
// declared property getter: - (BOOL)scrollToTop;	// 0x326a6929
// declared property setter: - (void)setDialogPhase:(id)phase;	// 0x326a686d
// declared property setter: - (void)setDisplayTarget:(id)target;	// 0x326a68d9
// declared property setter: - (void)setScrollToTop:(BOOL)top;	// 0x326a69a1
// declared property setter: - (void)setTemporary:(BOOL)temporary;	// 0x326a6a5d
// declared property setter: - (void)setViews:(id)views;	// 0x326a6b09
// declared property getter: - (BOOL)temporary;	// 0x326a69e5
// declared property getter: - (id)views;	// 0x326a6aa1
@end
