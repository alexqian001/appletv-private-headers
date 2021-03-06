/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UIKBShape.h"
#import "UIKBCacheKey.h"

@class NSMutableDictionary, NSMutableArray, NSString, NSDictionary, NSArray;

@interface UIKBKeyboard : UIKBShape <NSCoding, UIKBCacheKey> {
	NSString *m_name;	// 64 = 0x40
	NSString *m_visualStyle;	// 68 = 0x44
	NSString *m_layout;	// 72 = 0x48
	NSMutableArray *m_keyplanes;	// 76 = 0x4c
	NSMutableDictionary *m_keyCache;	// 80 = 0x50
	NSMutableDictionary *m_keysetCache;	// 84 = 0x54
}
@property(readonly, assign, nonatomic) NSString *cacheKey;	// G=0x3485ed1d; 
@property(retain, nonatomic) NSDictionary *keyCache;	// G=0x3485ef89; S=0x3485ef99; @synthesize=m_keyCache
@property(retain, nonatomic) NSArray *keyplanes;	// G=0x3485ef69; S=0x3485ef79; @synthesize=m_keyplanes
@property(retain, nonatomic) NSMutableDictionary *keysetCache;	// G=0x3485efa9; S=0x3485efb9; @synthesize=m_keysetCache
@property(readonly, assign, nonatomic) NSString *layoutName;	// G=0x3485dfa9; 
@property(retain, nonatomic) NSString *name;	// G=0x3485ef29; S=0x3485ef39; @synthesize=m_name
@property(retain, nonatomic) NSString *visualStyle;	// G=0x3485ef49; S=0x3485ef59; @synthesize=m_visualStyle
+ (id)keyboard;	// 0x3485ddfd
- (id)init;	// 0x3485de45
- (id)initWithCoder:(id)coder;	// 0x3485e2d1
- (void)addKeyplane:(id)keyplane;	// 0x3485ea8d
// declared property getter: - (id)cacheKey;	// 0x3485ed1d
- (void)cacheKey:(id)key onKeyplane:(id)keyplane;	// 0x3485dfed
- (id)cachedKeysByKeyName:(id)name onKeyplane:(id)keyplane;	// 0x3485e199
- (id)currentKeyplanes;	// 0x3485ed7d
- (void)dealloc;	// 0x3485def1
- (id)description;	// 0x3485eaad
- (void)encodeWithCoder:(id)coder;	// 0x3485e755
- (BOOL)isEqual:(id)equal;	// 0x3485e7f1
// declared property getter: - (id)keyCache;	// 0x3485ef89
- (id)keyplaneForKey:(id)key;	// 0x3485ed8d
- (id)keyplaneWithName:(id)name;	// 0x3485e9a1
// declared property getter: - (id)keyplanes;	// 0x3485ef69
// declared property getter: - (id)keysetCache;	// 0x3485efa9
- (void)layout;	// 0x3485eb59
// declared property getter: - (id)layoutName;	// 0x3485dfa9
- (void)makeLikeOther:(id)other;	// 0x3485e8a1
// declared property getter: - (id)name;	// 0x3485ef29
// declared property setter: - (void)setKeyCache:(id)cache;	// 0x3485ef99
// declared property setter: - (void)setKeyplanes:(id)keyplanes;	// 0x3485ef79
// declared property setter: - (void)setKeysetCache:(id)cache;	// 0x3485efb9
// declared property setter: - (void)setName:(id)name;	// 0x3485ef39
// declared property setter: - (void)setVisualStyle:(id)style;	// 0x3485ef59
// declared property getter: - (id)visualStyle;	// 0x3485ef49
@end

