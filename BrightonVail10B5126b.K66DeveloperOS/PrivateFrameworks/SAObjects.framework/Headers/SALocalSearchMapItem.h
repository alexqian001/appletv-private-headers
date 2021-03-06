/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainObject.h"

@class SADistance, SALocation, NSString, NSArray, NSNumber;
@protocol SAAceSerializable;

@interface SALocalSearchMapItem : SADomainObject {
}
@property(copy, nonatomic) NSArray *attributions;	// G=0x353cdc35; S=0x353cdcb1; 
@property(retain, nonatomic) id<SAAceSerializable> detail;	// G=0x353cdd19; S=0x353cdd6d; 
@property(copy, nonatomic) NSString *detailType;	// G=0x353cdda9; S=0x353cddc5; 
@property(copy, nonatomic) NSString *directionRole;	// G=0x353cde15; S=0x353cde31; 
@property(retain, nonatomic) SADistance *distance;	// G=0x353cde81; S=0x353cded5; 
@property(copy, nonatomic) NSNumber *distanceInMiles;	// G=0x353cdf11; S=0x353cdf2d; 
@property(copy, nonatomic) NSString *label;	// G=0x353cdf7d; S=0x353cdf99; 
@property(copy, nonatomic) NSNumber *localSearchProviderId;	// G=0x353cdfe9; S=0x353ce005; 
@property(retain, nonatomic) SALocation *location;	// G=0x353ce055; S=0x353ce0a9; 
@property(copy, nonatomic) NSNumber *placeId;	// G=0x353ce0e5; S=0x353ce101; 
+ (id)mapItem;	// 0x353cdba5
+ (id)mapItemWithDictionary:(id)dictionary context:(id)context;	// 0x353cdbe9
// declared property getter: - (id)attributions;	// 0x353cdc35
// declared property getter: - (id)detail;	// 0x353cdd19
// declared property getter: - (id)detailType;	// 0x353cdda9
// declared property getter: - (id)directionRole;	// 0x353cde15
// declared property getter: - (id)distance;	// 0x353cde81
// declared property getter: - (id)distanceInMiles;	// 0x353cdf11
- (id)encodedClassName;	// 0x353cdb99
- (id)groupIdentifier;	// 0x353cdb89
// declared property getter: - (id)label;	// 0x353cdf7d
// declared property getter: - (id)localSearchProviderId;	// 0x353cdfe9
// declared property getter: - (id)location;	// 0x353ce055
// declared property getter: - (id)placeId;	// 0x353ce0e5
// declared property setter: - (void)setAttributions:(id)attributions;	// 0x353cdcb1
// declared property setter: - (void)setDetail:(id)detail;	// 0x353cdd6d
// declared property setter: - (void)setDetailType:(id)type;	// 0x353cddc5
// declared property setter: - (void)setDirectionRole:(id)role;	// 0x353cde31
// declared property setter: - (void)setDistance:(id)distance;	// 0x353cded5
// declared property setter: - (void)setDistanceInMiles:(id)miles;	// 0x353cdf2d
// declared property setter: - (void)setLabel:(id)label;	// 0x353cdf99
// declared property setter: - (void)setLocalSearchProviderId:(id)anId;	// 0x353ce005
// declared property setter: - (void)setLocation:(id)location;	// 0x353ce0a9
// declared property setter: - (void)setPlaceId:(id)anId;	// 0x353ce101
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x353ce151
@end

