//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSDate, NSString, NSURL, NSUUID;

@interface _PSAttachment : NSObject <NSSecureCoding>
{
    NSDate *_creationDate;
    NSString *_UTI;
    NSString *_photoLocalIdentifier;
    NSUUID *_identifier;
    NSUUID *_cloudIdentifier;
    NSURL *_contentURL;
    NSString *_contentText;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *contentText; // @synthesize contentText=_contentText;
@property(readonly, copy, nonatomic) NSURL *contentURL; // @synthesize contentURL=_contentURL;
@property(readonly, copy, nonatomic) NSUUID *cloudIdentifier; // @synthesize cloudIdentifier=_cloudIdentifier;
@property(readonly, copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSString *photoLocalIdentifier; // @synthesize photoLocalIdentifier=_photoLocalIdentifier;
@property(readonly, copy, nonatomic) NSString *UTI; // @synthesize UTI=_UTI;
@property(readonly, copy, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCreationDate:(id)arg1 UTI:(id)arg2 photoLocalIdentifier:(id)arg3 identifier:(id)arg4 cloudIdentifier:(id)arg5 contentURL:(id)arg6 contentText:(id)arg7;

@end

