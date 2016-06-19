//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CNContactChangeRequest : NSObject <NSSecureCoding>
{
    NSArray *_contacts;
    long long _kind;
    NSString *_linkIdentifier;
}

+ (BOOL)supportsSecureCoding;
+ (id)contactChangeRequestWithKind:(long long)arg1 contacts:(id)arg2 linkIdentifier:(id)arg3;
@property(readonly, copy, nonatomic) NSString *linkIdentifier; // @synthesize linkIdentifier=_linkIdentifier;
@property(readonly, nonatomic) long long kind; // @synthesize kind=_kind;
@property(readonly, copy, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
- (void)dealloc;
@property(readonly, copy, nonatomic) NSArray *contactIdentifiers;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKind:(long long)arg1 contacts:(id)arg2 linkIdentifier:(id)arg3;

@end

