//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, OCFontMetadata;

__attribute__((visibility("hidden")))
@interface OCFontSubfamily : NSObject
{
    NSString *_name;
    OCFontMetadata *_metadata;
}

+ (id)fontSubfamilyWithName:(id)arg1 metadata:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) OCFontMetadata *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id)initWithName:(id)arg1 metadata:(id)arg2;

@end

