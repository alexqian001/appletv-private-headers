/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol CPKApplication <NSObject>
- (id)appIdentifier;
- (id)appJSURL;
@optional
- (id)appLaunchParams;
@required
- (id)localStorage;
- (BOOL)shouldIgnoreJSValidation;
- (id)vendorIdentifier;
- (id)vendorStorage;
@end

