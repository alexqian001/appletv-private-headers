/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class OADDrawable;

@interface WDStory : NSObject {
	OADDrawable *mHead;	// 4 = 0x4
	BOOL mOle;	// 8 = 0x8
}
@property(assign, getter=isOle) BOOL ole;	// G=0x37b5bfe5; S=0x37b5bfd5; converted property
- (id)initWithHead:(id)head;	// 0x37b5bec1
- (void)dealloc;	// 0x37b5bf15
- (id)head;	// 0x37b5bf61
// converted property getter: - (BOOL)isOle;	// 0x37b5bfe5
// converted property setter: - (void)setOle:(BOOL)ole;	// 0x37b5bfd5
- (id)text;	// 0x37b5bf71
@end
