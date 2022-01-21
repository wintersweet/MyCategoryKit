#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "NSArray+NullSafe.h"
#import "NSMutableArray+NullSafe.h"
#import "NSMutableDictionary+NullSafe.h"
#import "NSNull+NullSafe.h"
#import "NSObject+NullSafe.h"

FOUNDATION_EXPORT double MyCategoryKitVersionNumber;
FOUNDATION_EXPORT const unsigned char MyCategoryKitVersionString[];

