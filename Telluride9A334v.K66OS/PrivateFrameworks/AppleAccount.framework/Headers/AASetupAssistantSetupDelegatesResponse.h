/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import "AAResponse.h"

@class NSString, NSDictionary, NSNumber;

@interface AASetupAssistantSetupDelegatesResponse : AAResponse {
}
@property(readonly, assign, nonatomic) NSDictionary *responseParameters;	// G=0x33a672ed; 
@property(readonly, assign, nonatomic) NSNumber *status;	// G=0x33a67285; 
@property(readonly, assign, nonatomic) NSString *statusMessage;	// G=0x33a672b9; 
// declared property getter: - (id)responseParameters;	// 0x33a672ed
- (id)responseParametersForServiceIdentifier:(id)serviceIdentifier;	// 0x33a67321
// declared property getter: - (id)status;	// 0x33a67285
// declared property getter: - (id)statusMessage;	// 0x33a672b9
@end

