/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSString;

@interface MPReportingAdTrackMetadata : MPReportingTrackMetadata {
    int _adType;
    NSString *_externalIdentifier;
}

@property int adType;
@property(copy) NSString * externalIdentifier;

- (void).cxx_destruct;
- (int)adType;
- (id)externalIdentifier;
- (id)initWithRadioAdTrack:(id)arg1;
- (void)setAdType:(int)arg1;
- (void)setExternalIdentifier:(id)arg1;

@end
