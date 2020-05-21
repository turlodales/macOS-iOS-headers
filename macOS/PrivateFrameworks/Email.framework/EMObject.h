//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EFPubliclyDescribable.h"
#import "EMObject.h"
#import "NSSecureCoding.h"

@class EMObjectID, NSString;

@interface EMObject : NSObject <EMObject, NSSecureCoding, EFPubliclyDescribable>
{
    EMObjectID *_objectID;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) EMObjectID *objectID; // @synthesize objectID=_objectID;
@property(readonly, copy, nonatomic) NSString *ef_publicDescription;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_commonInitWithObjectID:(id)arg1;
- (id)initWithObjectID:(id)arg1;

// Remaining properties
@property(readonly) Class superclass;

@end

