/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSKeyedUnarchiver.h> // Unknown library

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface UIStateRestorationKeyedUnarchiver : NSKeyedUnarchiver {
	NSDictionary *_defaultValues;	// 72 = 0x48
}
- (id)initForReadingWithData:(id)data defaultValues:(id)values;	// 0x34987b01
- (void)dealloc;	// 0x34987b55
- (id)decodeObjectForKey:(id)key;	// 0x34987ba1
@end
