/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class NSNumber, NSString;

@interface SASToken : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSNumber *confidenceScore;	// G=0x3661aac5; S=0x3661aae1; 
@property(copy, nonatomic) NSNumber *endTime;	// G=0x3661ab31; S=0x3661ab4d; 
@property(assign, nonatomic) BOOL removeSpaceAfter;	// G=0x3661ab9d; S=0x3661ac15; 
@property(assign, nonatomic) BOOL removeSpaceBefore;	// G=0x3661ac59; S=0x3661acd1; 
@property(copy, nonatomic) NSNumber *startTime;	// G=0x3661ad15; S=0x3661ad31; 
@property(copy, nonatomic) NSString *text;	// G=0x3661ad81; S=0x3661ad9d; 
+ (id)token;	// 0x3661aa35
+ (id)tokenWithDictionary:(id)dictionary context:(id)context;	// 0x3661aa79
// declared property getter: - (id)confidenceScore;	// 0x3661aac5
- (id)encodedClassName;	// 0x3661aa29
// declared property getter: - (id)endTime;	// 0x3661ab31
- (id)groupIdentifier;	// 0x3661aa19
// declared property getter: - (BOOL)removeSpaceAfter;	// 0x3661ab9d
// declared property getter: - (BOOL)removeSpaceBefore;	// 0x3661ac59
// declared property setter: - (void)setConfidenceScore:(id)score;	// 0x3661aae1
// declared property setter: - (void)setEndTime:(id)time;	// 0x3661ab4d
// declared property setter: - (void)setRemoveSpaceAfter:(BOOL)after;	// 0x3661ac15
// declared property setter: - (void)setRemoveSpaceBefore:(BOOL)before;	// 0x3661acd1
// declared property setter: - (void)setStartTime:(id)time;	// 0x3661ad31
// declared property setter: - (void)setText:(id)text;	// 0x3661ad9d
// declared property getter: - (id)startTime;	// 0x3661ad15
// declared property getter: - (id)text;	// 0x3661ad81
@end

