//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Intents/INCodableAttributeMetadata.h>

@class NSArray, NSString;

@interface INCodableFileAttributeMetadata : INCodableAttributeMetadata
{
    NSString *_type;
    NSArray *_customUTIs;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *customUTIs; // @synthesize customUTIs=_customUTIs;
@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) NSArray *UTIs;
- (id)dictionaryRepresentationWithLocalizer:(id)arg1;
- (void)updateWithDictionary:(id)arg1;

@end

