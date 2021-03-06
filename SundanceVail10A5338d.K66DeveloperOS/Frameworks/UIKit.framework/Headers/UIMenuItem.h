/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface UIMenuItem : NSObject {
	NSString *_title;	// 4 = 0x4
	SEL _action;	// 8 = 0x8
	BOOL _dontDismiss;	// 12 = 0xc
}
@property(assign, nonatomic) SEL action;	// G=0x30d5dc61; S=0x30d5c655; @synthesize=_action
@property(assign, nonatomic) BOOL dontDismiss;	// G=0x30d5dc85; S=0x30d5c665; @synthesize=_dontDismiss
@property(copy, nonatomic) NSString *title;	// G=0x30d5dc71; S=0x30d5c645; @synthesize=_title
- (id)initWithTitle:(id)title action:(SEL)action;	// 0x30d5c5e5
// declared property getter: - (SEL)action;	// 0x30d5dc61
- (void)dealloc;	// 0x30ece1d9
// declared property getter: - (BOOL)dontDismiss;	// 0x30d5dc85
// declared property setter: - (void)setAction:(SEL)action;	// 0x30d5c655
// declared property setter: - (void)setDontDismiss:(BOOL)dismiss;	// 0x30d5c665
// declared property setter: - (void)setTitle:(id)title;	// 0x30d5c645
// declared property getter: - (id)title;	// 0x30d5dc71
@end

