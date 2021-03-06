/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPServerObjectDatabaseAsset : NSObject {
    long long  _flavor;
    NSString * _hashedPersonID;
    NSString * _identifier;
    NSData * _miniSINF;
    NSURL * _url;
}

@property (nonatomic, readonly) long long flavor;
@property (nonatomic, readonly, copy) NSString *hashedPersonID;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSData *miniSINF;
@property (nonatomic, readonly, copy) NSURL *url;

- (void).cxx_destruct;
- (id)description;
- (long long)flavor;
- (id)hashedPersonID;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 hashedPersonID:(id)arg2 flavor:(long long)arg3 url:(id)arg4 miniSINF:(id)arg5;
- (id)initWithSQLRowResult:(id)arg1;
- (id)miniSINF;
- (id)url;

@end
