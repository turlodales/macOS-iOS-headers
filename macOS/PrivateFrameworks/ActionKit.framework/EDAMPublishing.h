//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class NSNumber, NSString;

@interface EDAMPublishing : FATObject
{
    NSString *_uri;
    NSNumber *_order;
    NSNumber *_ascending;
    NSString *_publicDescription;
}

+ (id)structFields;
+ (id)structName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *publicDescription; // @synthesize publicDescription=_publicDescription;
@property(retain, nonatomic) NSNumber *ascending; // @synthesize ascending=_ascending;
@property(retain, nonatomic) NSNumber *order; // @synthesize order=_order;
@property(retain, nonatomic) NSString *uri; // @synthesize uri=_uri;

@end

