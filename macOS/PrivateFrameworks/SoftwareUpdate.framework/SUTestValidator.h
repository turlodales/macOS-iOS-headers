//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface SUTestValidator : NSObject
{
    NSDictionary *_productValidationsDict;
}

+ (id)sharedTestValidator;
- (unsigned long long)validationOverrideForProductKey:(id)arg1;
- (id)init;
- (void)_plistDidChange:(id)arg1;
- (void)_loadProductValidations;

@end

