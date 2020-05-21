//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface PXMiniHTMLParser : NSObject
{
    CDUnknownBlockType _parsedCharactersBlock;
    CDUnknownBlockType _parsedMarkupElementStartBlock;
    CDUnknownBlockType _parsedMarkupElementEndBlock;
    CDUnknownBlockType _parsedErrorBlock;
    NSString *__string;
}

+ (id)stringByConvertingToHTML:(id)arg1;
+ (id)charactersForEntityNames;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *_string; // @synthesize _string=__string;
@property(copy, nonatomic) CDUnknownBlockType parsedErrorBlock; // @synthesize parsedErrorBlock=_parsedErrorBlock;
@property(copy, nonatomic) CDUnknownBlockType parsedMarkupElementEndBlock; // @synthesize parsedMarkupElementEndBlock=_parsedMarkupElementEndBlock;
@property(copy, nonatomic) CDUnknownBlockType parsedMarkupElementStartBlock; // @synthesize parsedMarkupElementStartBlock=_parsedMarkupElementStartBlock;
@property(copy, nonatomic) CDUnknownBlockType parsedCharactersBlock; // @synthesize parsedCharactersBlock=_parsedCharactersBlock;
- (void)parse;
- (id)initWithString:(id)arg1;
- (id)init;

@end

