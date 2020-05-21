//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface CNAutocompleteNameComponents : NSObject <NSCopying>
{
    NSString *_firstName;
    NSString *_lastName;
    NSString *_nickname;
    NSString *_nameSuffix;
}

+ (id)contactKeys;
+ (id)nameComponentsWithFirstName:(id)arg1 lastName:(id)arg2 nickname:(id)arg3 nameSuffix:(id)arg4;
- (void).cxx_destruct;
@property(readonly) NSString *nameSuffix; // @synthesize nameSuffix=_nameSuffix;
@property(readonly) NSString *nickname; // @synthesize nickname=_nickname;
@property(readonly) NSString *lastName; // @synthesize lastName=_lastName;
@property(readonly) NSString *firstName; // @synthesize firstName=_firstName;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

