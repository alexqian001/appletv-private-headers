/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <NSObject.h> // Unknown library
#import "iWorkImport-Structs.h"


@interface GQHTextSpan : NSObject {
}
+ (int)handleAttachment:(id)attachment state:(id)state;	// 0x368e6b35
+ (int)handleAutoNumber:(id)number state:(id)state;	// 0x368e6a41
+ (int)handleContainerHint:(id)hint state:(id)state;	// 0x368e6c55
+ (int)handlePageStart:(id)start state:(id)state;	// 0x368e6b31
+ (int)handleSpan:(id)span checkForTrailingBlanks:(BOOL)trailingBlanks state:(id)state;	// 0x368e60a9
+ (int)handleTextBackgroundForStyle:(id)style destStyle:(id)style2 state:(id)state;	// 0x368e6745
+ (int)handleTextList:(id)list checkForTrailingBlanks:(BOOL)trailingBlanks state:(id)state;	// 0x368e6339
+ (int)handleTextListChild:(id)child outputBlanks:(BOOL)blanks state:(id)state;	// 0x368e63d1
+ (int)handleTextMarker:(id)marker outputBlanks:(BOOL)blanks state:(id)state;	// 0x368e6961
+ (int)nonWhitespaceCount:(CFArrayRef)count;	// 0x368e68b5
@end
