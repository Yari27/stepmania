local players = GAMESTATE:GetHumanPlayers()

local t = Def.ActorFrame {};

for pn=1,#players do
	t[#t+1] = Def.ActorFrame {
		InitCommand=function(self)
			self:y(SCREEN_CENTER_Y)
			self:x(
				THEME:GetMetric(
					Var "LoadingScreen",
					"Player" .. ToEnumShortString(players[pn]) .. ToEnumShortString(GAMESTATE:GetCurrentStyle():GetStyleType()) .. "X"
				)
			)
		end,
		Def.Quad {
			InitCommand=function(self)
				self:fadeleft(0.1);
				self:faderight(0.1);
				self:zoomtoheight(SCREEN_HEIGHT);
				self:zoomtowidth(
					Center1Player() and SCREEN_WIDTH-32 or SCREEN_CENTER_X-16
				)
			end
		};
	};
end

return t