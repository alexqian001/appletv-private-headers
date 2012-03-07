/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "StoreServices-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSString, SSItemMedia, SSItem, NSDictionary, NSArray, SSDialog, NSSet;

@interface SSItemOffer : NSObject <NSCopying> {
@private
	SSItem *_item;	// 4 = 0x4
	NSDictionary *_offerDictionary;	// 8 = 0x8
	NSString *_offerIdentifier;	// 12 = 0xc
	NSArray *_supportedDevices;	// 16 = 0x10
}
@property(assign, nonatomic, getter=_offerItem, setter=_setOfferItem:) SSItem *_offerItem;	// G=0x3272ea29; S=0x3272ea39; @synthesize=_item
@property(readonly, assign, nonatomic) NSSet *accountIdentifiers;	// G=0x3272ed35; 
@property(readonly, assign, nonatomic) NSString *actionDisplayName;	// G=0x3272f0f9; 
@property(readonly, assign, nonatomic) NSString *actionType;	// G=0x3272ecd9; 
@property(readonly, assign, nonatomic) NSString *buyParameters;	// G=0x3272f069; 
@property(readonly, assign, nonatomic) SSDialog *confirmationDialog;	// G=0x3272f001; 
@property(readonly, assign, nonatomic) long long estimatedDiskSpaceNeeded;	// G=0x3272ec55; 
@property(readonly, assign, nonatomic) NSString *offerIdentifier;	// G=0x3272ea49; @synthesize=_offerIdentifier
@property(readonly, assign, nonatomic) SSItemMedia *offerMedia;	// G=0x3272f351; 
@property(readonly, assign, nonatomic, getter=isPreorder) BOOL preorder;	// G=0x3272eea9; 
@property(readonly, assign, nonatomic) NSString *priceDisplay;	// G=0x3272ee41; 
@property(readonly, assign, nonatomic) id requiredSoftwareCapabilities;	// G=0x3272ebdd; 
@property(readonly, assign, nonatomic) BOOL shouldShowPlusIcon;	// G=0x3272eb95; 
@property(readonly, assign, nonatomic) SSDialog *successDialog;	// G=0x3272edd9; 
@property(readonly, assign, nonatomic) NSArray *supportedDevices;	// G=0x3272f4b1; 
+ (id)_preferredOfferIdentifiers;	// 0x3272ea59
- (id)init;	// 0x3272f1d5
- (id)initWithOfferIdentifier:(id)offerIdentifier dictionary:(id)dictionary;	// 0x3272f2e1
// declared property getter: - (id)_offerItem;	// 0x3272ea29
// declared property setter: - (void)_setOfferItem:(id)item;	// 0x3272ea39
// declared property getter: - (id)accountIdentifiers;	// 0x3272ed35
// declared property getter: - (id)actionDisplayName;	// 0x3272f0f9
// declared property getter: - (id)actionType;	// 0x3272ecd9
// declared property getter: - (id)buyParameters;	// 0x3272f069
// declared property getter: - (id)confirmationDialog;	// 0x3272f001
- (id)copyWithZone:(NSZone *)zone;	// 0x3272f14d
- (void)dealloc;	// 0x3272f275
- (id)description;	// 0x3272f1ed
- (id)documentCannotOpenDialog;	// 0x3272ef99
- (id)documentRequiredHandlers;	// 0x3272ef45
- (id)documentUTI;	// 0x3272eef1
// declared property getter: - (long long)estimatedDiskSpaceNeeded;	// 0x3272ec55
// declared property getter: - (BOOL)isPreorder;	// 0x3272eea9
// declared property getter: - (id)offerIdentifier;	// 0x3272ea49
// declared property getter: - (id)offerMedia;	// 0x3272f351
- (id)playableMedia;	// 0x3272ee95
// declared property getter: - (id)priceDisplay;	// 0x3272ee41
// declared property getter: - (id)requiredSoftwareCapabilities;	// 0x3272ebdd
// declared property getter: - (BOOL)shouldShowPlusIcon;	// 0x3272eb95
// declared property getter: - (id)successDialog;	// 0x3272edd9
// declared property getter: - (id)supportedDevices;	// 0x3272f4b1
- (id)valueForProperty:(id)property;	// 0x3272ed9d
@end
