/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSMetricsBaseEvent.h"

@class NSNumber, NSString;

@interface SSMetricsClickEvent : SSMetricsBaseEvent {
}
@property(retain, nonatomic) id actionDetails;	// G=0x32866035; S=0x328660dd; 
@property(retain, nonatomic) NSString *actionType;	// G=0x32866051; S=0x328660f9; 
@property(retain, nonatomic) NSString *impressions;	// G=0x3286606d; S=0x32866115; 
@property(retain, nonatomic) NSString *locationDescription;	// G=0x32866089; S=0x32866131; 
@property(retain, nonatomic) NSNumber *positionX;	// G=0x328660a5; S=0x3286614d; 
@property(retain, nonatomic) NSNumber *positionY;	// G=0x328660c1; S=0x32866169; 
@property(retain, nonatomic) NSString *targetIdentifier;	// G=0x328661d9; S=0x32866185; 
@property(retain, nonatomic) NSString *targetType;	// G=0x328661f5; S=0x328661a1; 
@property(retain, nonatomic) NSString *targetURL;	// G=0x32866211; S=0x328661bd; 
- (id)init;	// 0x32865fe1
// declared property getter: - (id)actionDetails;	// 0x32866035
// declared property getter: - (id)actionType;	// 0x32866051
- (id)description;	// 0x3286622d
// declared property getter: - (id)impressions;	// 0x3286606d
// declared property getter: - (id)locationDescription;	// 0x32866089
// declared property getter: - (id)positionX;	// 0x328660a5
// declared property getter: - (id)positionY;	// 0x328660c1
// declared property setter: - (void)setActionDetails:(id)details;	// 0x328660dd
// declared property setter: - (void)setActionType:(id)type;	// 0x328660f9
// declared property setter: - (void)setImpressions:(id)impressions;	// 0x32866115
// declared property setter: - (void)setLocationDescription:(id)description;	// 0x32866131
// declared property setter: - (void)setPositionX:(id)x;	// 0x3286614d
// declared property setter: - (void)setPositionY:(id)y;	// 0x32866169
// declared property setter: - (void)setTargetIdentifier:(id)identifier;	// 0x32866185
// declared property setter: - (void)setTargetType:(id)type;	// 0x328661a1
// declared property setter: - (void)setTargetURL:(id)url;	// 0x328661bd
// declared property getter: - (id)targetIdentifier;	// 0x328661d9
// declared property getter: - (id)targetType;	// 0x328661f5
// declared property getter: - (id)targetURL;	// 0x32866211
@end
