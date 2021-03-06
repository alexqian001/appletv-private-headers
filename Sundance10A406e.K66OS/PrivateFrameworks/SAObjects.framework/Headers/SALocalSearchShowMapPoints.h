/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class SALocalSearchMapItem, NSString, NSNumber, NSURL;

@interface SALocalSearchShowMapPoints : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSString *directionsType;	// G=0x325342dd; S=0x325342f9; 
@property(retain, nonatomic) SALocalSearchMapItem *itemDestination;	// G=0x32534349; S=0x3253439d; 
@property(retain, nonatomic) SALocalSearchMapItem *itemSource;	// G=0x325343d9; S=0x3253442d; 
@property(copy, nonatomic) NSNumber *regionOfInterestRadiusInMiles;	// G=0x32534469; S=0x32534485; 
@property(assign, nonatomic) BOOL showDirections;	// G=0x325344d5; S=0x3253454d; 
@property(assign, nonatomic) BOOL showTraffic;	// G=0x32534591; S=0x32534609; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x32534201; S=0x3253427d; 
+ (id)showMapPoints;	// 0x32534171
+ (id)showMapPointsWithDictionary:(id)dictionary context:(id)context;	// 0x325341b5
// declared property getter: - (id)directionsType;	// 0x325342dd
- (id)encodedClassName;	// 0x32534165
- (id)groupIdentifier;	// 0x32534155
// declared property getter: - (id)itemDestination;	// 0x32534349
// declared property getter: - (id)itemSource;	// 0x325343d9
// declared property getter: - (id)regionOfInterestRadiusInMiles;	// 0x32534469
- (BOOL)requiresResponse;	// 0x3253464d
// declared property setter: - (void)setDirectionsType:(id)type;	// 0x325342f9
// declared property setter: - (void)setItemDestination:(id)destination;	// 0x3253439d
// declared property setter: - (void)setItemSource:(id)source;	// 0x3253442d
// declared property setter: - (void)setRegionOfInterestRadiusInMiles:(id)miles;	// 0x32534485
// declared property setter: - (void)setShowDirections:(BOOL)directions;	// 0x3253454d
// declared property setter: - (void)setShowTraffic:(BOOL)traffic;	// 0x32534609
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x3253427d
// declared property getter: - (BOOL)showDirections;	// 0x325344d5
// declared property getter: - (BOOL)showTraffic;	// 0x32534591
// declared property getter: - (id)targetAppId;	// 0x32534201
@end

