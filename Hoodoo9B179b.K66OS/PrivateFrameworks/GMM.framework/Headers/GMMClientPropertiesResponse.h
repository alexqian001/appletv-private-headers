/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface GMMClientPropertiesResponse : PBCodable {
	NSString *_replacementCohort;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) BOOL hasReplacementCohort;	// G=0x31d0fdc9; 
@property(retain, nonatomic) NSString *replacementCohort;	// G=0x31d0ffad; S=0x31d0ffbd; @synthesize=_replacementCohort
- (void)dealloc;	// 0x31d0fd85
- (id)description;	// 0x31d0fde1
- (id)dictionaryRepresentation;	// 0x31d0fe51
// declared property getter: - (BOOL)hasReplacementCohort;	// 0x31d0fdc9
- (BOOL)readFrom:(id)from;	// 0x31d0fea5
// declared property getter: - (id)replacementCohort;	// 0x31d0ffad
// declared property setter: - (void)setReplacementCohort:(id)cohort;	// 0x31d0ffbd
- (void)writeTo:(id)to;	// 0x31d0ff7d
@end
