//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface RKAggdStatistics : NSObject
{
}

+ (void)clearScalarValuesForLanguage:(id)arg1;
+ (void)decrementAggdKeyForCategory:(id)arg1 forAction:(id)arg2 withLanguageID:(id)arg3;
+ (void)incrementAggdKeyForCategory:(id)arg1 forAction:(id)arg2 withLanguageID:(id)arg3;
+ (id)buildAggdKey:(id)arg1 forAction:(id)arg2 withLanguageID:(id)arg3;

@end

