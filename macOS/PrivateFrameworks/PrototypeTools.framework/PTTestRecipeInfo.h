//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PrototypeTools/NSSecureCoding-Protocol.h>

@class NSIndexSet, NSString;

@interface PTTestRecipeInfo : NSObject <NSSecureCoding>
{
    NSString *_uniqueIdentifier;
    NSString *_domainIdentifier;
    NSString *_title;
    NSIndexSet *_events;
    NSString *_recipeDescription;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *recipeDescription; // @synthesize recipeDescription=_recipeDescription;
@property(readonly, nonatomic) NSIndexSet *events; // @synthesize events=_events;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSString *domainIdentifier; // @synthesize domainIdentifier=_domainIdentifier;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) NSString *uniqueIdentifier;
- (id)initWithTestRecipe:(id)arg1 domainInfo:(id)arg2;

@end

