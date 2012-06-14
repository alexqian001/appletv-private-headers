/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface GMMDirectionsAlert : PBCodable {
	NSString *_headline;	// 4 = 0x4
	NSString *_text;	// 8 = 0x8
	NSString *_url;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) BOOL hasHeadline;	// G=0x31cf56bd; 
@property(readonly, assign, nonatomic) BOOL hasText;	// G=0x31cf56d5; 
@property(readonly, assign, nonatomic) BOOL hasUrl;	// G=0x31cf56ed; 
@property(retain, nonatomic) NSString *headline;	// G=0x31cf59ad; S=0x31cf59bd; @synthesize=_headline
@property(retain, nonatomic) NSString *text;	// G=0x31cf59e1; S=0x31cf59f1; @synthesize=_text
@property(retain, nonatomic) NSString *url;	// G=0x31cf5a15; S=0x31cf5a25; @synthesize=_url
- (void)dealloc;	// 0x31cf5651
- (id)description;	// 0x31cf5705
- (id)dictionaryRepresentation;	// 0x31cf5775
// declared property getter: - (BOOL)hasHeadline;	// 0x31cf56bd
// declared property getter: - (BOOL)hasText;	// 0x31cf56d5
// declared property getter: - (BOOL)hasUrl;	// 0x31cf56ed
// declared property getter: - (id)headline;	// 0x31cf59ad
- (BOOL)readFrom:(id)from;	// 0x31cf5821
// declared property setter: - (void)setHeadline:(id)headline;	// 0x31cf59bd
// declared property setter: - (void)setText:(id)text;	// 0x31cf59f1
// declared property setter: - (void)setUrl:(id)url;	// 0x31cf5a25
// declared property getter: - (id)text;	// 0x31cf59e1
// declared property getter: - (id)url;	// 0x31cf5a15
- (void)writeTo:(id)to;	// 0x31cf5931
@end
