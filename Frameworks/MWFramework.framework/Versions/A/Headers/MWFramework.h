//
//  MWFramework.h
//  MWFramework
//
//  Created by Alex on 04/05/2020.
//  Copyright © 2020 Alex. All rights reserved.
//

#import <Foundation/Foundation.h>

//! Project version number for MWFramework.
FOUNDATION_EXPORT double MWFrameworkVersionNumber;

//! Project version string for MWFramework.
FOUNDATION_EXPORT const unsigned char MWFrameworkVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <MWFramework/PublicHeader.h>
#import <MWFramework/MWBetterCrashes.h>
#import <MWFramework/UKCrashreporter.h>

NSString *MWStackTrace(void);
NSString *MWStackTraceFromException(NSException *e);


