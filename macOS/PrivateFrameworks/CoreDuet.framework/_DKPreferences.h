//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface _DKPreferences : NSObject
{
    NSString *_domain;
}

+ (id)preferencesForDomain:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (id)objectForKey:(id)arg1 havingClass:(Class)arg2;
- (void)removeObjectForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)stringForKey:(id)arg1;
- (id)numberForKey:(id)arg1;
- (id)dictionaryForKey:(id)arg1;
- (id)dataForKey:(id)arg1;
- (void)setBool:(BOOL)arg1 forKey:(id)arg2;
- (BOOL)boolForKey:(id)arg1;
- (id)arrayForKey:(id)arg1;
- (id)initWithDomain:(id)arg1;

@end

