/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import <NSObject.h> // Unknown library


@interface CPLRUDictionaryNode : NSObject {
	id _key;	// 4 = 0x4
	id _object;	// 8 = 0x8
	CPLRUDictionaryNode *next;	// 12 = 0xc
	CPLRUDictionaryNode *prev;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) id key;	// G=0x335ebcad; @synthesize=_key
@property(retain, nonatomic) id object;	// G=0x335ebcbd; S=0x335ebccd; @synthesize=_object
- (id)initWithKey:(id)key object:(id)object;	// 0x335ebbd1
- (void)dealloc;	// 0x335ebc49
// declared property getter: - (id)key;	// 0x335ebcad
// declared property getter: - (id)object;	// 0x335ebcbd
// declared property setter: - (void)setObject:(id)object;	// 0x335ebccd
@end

