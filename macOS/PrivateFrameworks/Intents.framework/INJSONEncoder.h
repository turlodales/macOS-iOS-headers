//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface INJSONEncoder : NSObject
{
    NSString *_languageCode;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
- (id)_encodeObject:(id)arg1 codableAttribute:(id)arg2;
- (id)encodeObject:(id)arg1 withCodableAttribute:(id)arg2;
- (id)encodeObject:(id)arg1;
- (id)encodeObject:(id)arg1 withCodableDescription:(id)arg2;

@end

