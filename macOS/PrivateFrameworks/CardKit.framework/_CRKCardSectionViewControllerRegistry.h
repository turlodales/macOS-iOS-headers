//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface _CRKCardSectionViewControllerRegistry : NSObject
{
    NSMutableDictionary *_cardSectionViewControllerClassNameForCardSectionClassName;
}

- (void).cxx_destruct;
- (Class)cardSectionViewControllerClassForCardSectionClass:(Class)arg1;
- (void)registerCardSectionViewControllerClass:(Class)arg1 forCardSectionClass:(Class)arg2;
- (id)init;

@end

