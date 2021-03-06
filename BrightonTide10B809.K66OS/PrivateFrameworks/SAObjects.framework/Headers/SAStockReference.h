/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainObject.h"

@class NSString;

@interface SAStockReference : SADomainObject {
}
@property(copy, nonatomic) NSString *companyName;	// G=0x353d4709; S=0x353d4725; 
@property(copy, nonatomic) NSString *symbol;	// G=0x353d4775; S=0x353d4791; 
+ (id)reference;	// 0x353d4679
+ (id)referenceWithDictionary:(id)dictionary context:(id)context;	// 0x353d46bd
// declared property getter: - (id)companyName;	// 0x353d4709
- (id)encodedClassName;	// 0x353d466d
- (id)groupIdentifier;	// 0x353d465d
// declared property setter: - (void)setCompanyName:(id)name;	// 0x353d4725
// declared property setter: - (void)setSymbol:(id)symbol;	// 0x353d4791
// declared property getter: - (id)symbol;	// 0x353d4775
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x353d47e1
@end

