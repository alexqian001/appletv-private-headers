/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import "UIFoundation-Structs.h"
#import "NSTextStorage.h"

@class NSConcreteNotifyingMutableAttributedString;

@interface NSConcreteTextStorage : NSTextStorage {
	NSConcreteNotifyingMutableAttributedString *_contents;	// 36 = 0x24
	opaque_pthread_rwlock_t _lock;	// 40 = 0x28
	struct {
		unsigned _forceFixAttributes : 1;
		unsigned _needLock : 1;
		unsigned _lockInitialized : 1;
		unsigned _reserved : 29;
	} _pFlags;	// 168 = 0xa8
}
+ (unsigned long)_writerCountTSDKey;	// 0x32cb5a01
- (id)init;	// 0x32cb605d
- (id)initWithAttributedString:(id)attributedString;	// 0x32cb5db1
- (id)initWithString:(id)string;	// 0x32cb5e91
- (id)initWithString:(id)string attributes:(id)attributes;	// 0x32cb5f71
- (BOOL)_forceFixAttributes;	// 0x32cb6219
- (void)_initLocks;	// 0x32cb5cd9
- (BOOL)_lockForReading;	// 0x32cb5b2d
- (BOOL)_lockForWritingWithExceptionHandler:(BOOL)exceptionHandler;	// 0x32cb5b61
- (void)_setForceFixAttributes:(BOOL)attributes;	// 0x32cb6201
- (void)_unlock;	// 0x32cb5c5d
- (void)addAttribute:(id)attribute value:(id)value range:(NSRange)range;	// 0x32cb6b51
- (id)attribute:(id)attribute atIndex:(unsigned)index effectiveRange:(NSAttributeDictionaryElement *)range;	// 0x32cb64c5
- (id)attribute:(id)attribute atIndex:(unsigned)index longestEffectiveRange:(NSAttributeDictionaryElement *)range inRange:(NSRange)range4;	// 0x32cb6629
- (id)attributesAtIndex:(unsigned)index effectiveRange:(NSAttributeDictionaryElement *)range;	// 0x32cb622d
- (id)attributesAtIndex:(unsigned)index longestEffectiveRange:(NSAttributeDictionaryElement *)range inRange:(NSRange)range3;	// 0x32cb637d
- (Class)classForCoder;	// 0x32cb5b11
- (void)dealloc;	// 0x32cb6071
- (BOOL)fixesAttributesLazily;	// 0x32cb60ed
- (unsigned)length;	// 0x32cb61c1
- (void)replaceCharactersInRange:(NSRange)range withAttributedString:(id)attributedString;	// 0x32cb6a0d
- (void)replaceCharactersInRange:(NSRange)range withString:(id)string;	// 0x32cb6785
- (void)setAttributes:(id)attributes range:(NSRange)range;	// 0x32cb68c9
- (id)string;	// 0x32cb61e1
@end
