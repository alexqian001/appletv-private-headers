/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "UIKit-Structs.h"

@class NSString, NSMutableArray;

@interface UIKBCacheToken : NSObject <NSCopying> {
	NSMutableArray *_components;	// 4 = 0x4
	NSString *_name;	// 8 = 0x8
	int _emptyFields;	// 12 = 0xc
}
@property(assign, nonatomic) int displayHint;	// G=0x33d31bc9; S=0x33d31c01; 
@property(assign, nonatomic) int emptyFields;	// G=0x33d320f9; S=0x33d32109; @synthesize=_emptyFields
@property(readonly, assign, nonatomic) BOOL hasKey;	// G=0x33d31c4d; 
@property(retain, nonatomic) NSString *name;	// G=0x33d320c5; S=0x33d320d5; @synthesize=_name
@property(assign, nonatomic) int rowHint;	// G=0x33d31b45; S=0x33d31b7d; 
@property(assign, nonatomic) CGSize size;	// G=0x33d31a61; S=0x33d31ac5; 
@property(readonly, assign, nonatomic) NSString *string;	// G=0x33a75855; 
+ (id)tokenForKey:(id)key style:(int)style state:(int)state;	// 0x33a7552d
+ (id)tokenTemplateFilledForKey:(id)key style:(int)style size:(CGSize)size;	// 0x33d31f25
+ (id)tokenTemplateForKey:(id)key name:(id)name style:(int)style size:(CGSize)size;	// 0x33d31ded
+ (id)tokenTemplateForKey:(id)key style:(int)style size:(CGSize)size;	// 0x33d31da1
- (id)initWithComponents:(id)components name:(id)name;	// 0x33a757a9
- (id)initWithComponents:(id)components name:(id)name emptyFields:(int)fields;	// 0x33a757cd
- (id)copyWithZone:(NSZone *)zone;	// 0x33d31a51
- (void)dealloc;	// 0x33a7587d
// declared property getter: - (int)displayHint;	// 0x33d31bc9
// declared property getter: - (int)emptyFields;	// 0x33d320f9
// declared property getter: - (BOOL)hasKey;	// 0x33d31c4d
// declared property getter: - (id)name;	// 0x33d320c5
// declared property getter: - (int)rowHint;	// 0x33d31b45
// declared property setter: - (void)setDisplayHint:(int)hint;	// 0x33d31c01
// declared property setter: - (void)setEmptyFields:(int)fields;	// 0x33d32109
// declared property setter: - (void)setName:(id)name;	// 0x33d320d5
// declared property setter: - (void)setRowHint:(int)hint;	// 0x33d31b7d
// declared property setter: - (void)setSize:(CGSize)size;	// 0x33d31ac5
// declared property getter: - (CGSize)size;	// 0x33d31a61
// declared property getter: - (id)string;	// 0x33a75855
- (id)stringForKey:(id)key state:(int)state;	// 0x33d31ca5
- (id)stringForState:(int)state;	// 0x33d31d65
@end
