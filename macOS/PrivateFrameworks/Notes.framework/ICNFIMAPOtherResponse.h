//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Notes/ICNFIMAPResponse.h>

@class NSArray, NSString;

@interface ICNFIMAPOtherResponse : ICNFIMAPResponse
{
    NSString *_responseName;
    NSArray *_parameters;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *parameters; // @synthesize parameters=_parameters;
@property(copy, nonatomic) NSString *responseName; // @synthesize responseName=_responseName;
- (id)description;

@end

