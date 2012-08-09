/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "NSCoding.h"
#import "Foundation-Structs.h"


@interface NSTextCheckingResult : NSObject <NSCopying, NSCoding> {
}
@property(readonly, assign) NSRange range;	// G=0x373f59ad; 
@property(readonly, assign) unsigned long long resultType;	// G=0x373f5985; 
+ (id)addressCheckingResultWithRange:(NSRange)range components:(id)components;	// 0x373f5c99
+ (id)correctionCheckingResultWithRange:(NSRange)range replacementString:(id)string;	// 0x373f5e3d
+ (id)dashCheckingResultWithRange:(NSRange)range replacementString:(id)string;	// 0x373f5d95
+ (id)dateCheckingResultWithRange:(NSRange)range date:(id)date;	// 0x373f5be5
+ (id)dateCheckingResultWithRange:(NSRange)range date:(id)date timeZone:(id)zone duration:(double)duration;	// 0x373f5c39
+ (id)grammarCheckingResultWithRange:(NSRange)range details:(id)details;	// 0x373f5b91
+ (void)initialize;	// 0x373f5681
+ (id)linkCheckingResultWithRange:(NSRange)range URL:(id)url;	// 0x373f5ced
+ (id)orthographyCheckingResultWithRange:(NSRange)range orthography:(id)orthography;	// 0x373f5af1
+ (id)phoneNumberCheckingResultWithRange:(NSRange)range phoneNumber:(id)number;	// 0x373f5f11
+ (id)quoteCheckingResultWithRange:(NSRange)range replacementString:(id)string;	// 0x373f5d41
+ (id)regularExpressionCheckingResultWithRanges:(NSRange *)ranges count:(unsigned)count regularExpression:(id)expression;	// 0x373f5e91
+ (id)replacementCheckingResultWithRange:(NSRange)range replacementString:(id)string;	// 0x373f5de9
+ (id)spellCheckingResultWithRange:(NSRange)range;	// 0x373f5b45
+ (id)transitInformationCheckingResultWithRange:(NSRange)range components:(id)components;	// 0x373f5f65
- (id)initWithCoder:(id)coder;	// 0x373f5779
- (id)URL;	// 0x373f5add
- (BOOL)_adjustRangesWithOffset:(int)offset;	// 0x373f59fd
- (id)addressComponents;	// 0x373f5ac9
- (id)components;	// 0x373f5ad9
- (id)copyWithZone:(NSZone *)zone;	// 0x373f56c1
- (id)date;	// 0x373f5aa5
- (NSRange)decodeRangeWithCoder:(id)coder;	// 0x373f584d
- (id)description;	// 0x373f56d1
- (double)duration;	// 0x373f5ab1
- (void)encodeRangeWithCoder:(id)coder;	// 0x373f579d
- (void)encodeWithCoder:(id)coder;	// 0x373f5755
- (id)grammarDetails;	// 0x373f5aa1
- (unsigned)numberOfRanges;	// 0x373f5a01
- (id)orthography;	// 0x373f5a9d
- (id)phoneNumber;	// 0x373f5ae9
// declared property getter: - (NSRange)range;	// 0x373f59ad
- (NSRange)rangeAtIndex:(unsigned)index;	// 0x373f5a05
- (id)regularExpression;	// 0x373f5ae5
- (id)replacementString;	// 0x373f5ae1
- (id)resultByAdjustingRangesWithOffset:(int)offset;	// 0x373f59d9
// declared property getter: - (unsigned long long)resultType;	// 0x373f5985
- (id)timeZone;	// 0x373f5aa9
- (void *)underlyingResult;	// 0x373f5aed
@end
